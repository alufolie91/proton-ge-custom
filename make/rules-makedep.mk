# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): build target arch
#
define create-rules-makedep
$(call create-rules-common,$(1),$(2),$(3),unix)
ifneq ($(findstring $(3)-unix,$(ARCHS)),)

$$(OBJ)/.$(1)-$(3)-configure: $$(OBJ)/.wine-$$(HOST_ARCH)-tools
	@echo ":: configuring $(1)-$(3)..." >&2

	sed -e '/^all:$$$$/,$$$$c all:' \
	    -e '/^SUBDIRS/,/[^\\]$$$$/c SUBDIRS = $$($(2)_SRC)' \
	    -e '/^TOP_INSTALL_LIB/c TOP_INSTALL_LIB = dlls/src-$(1)' \
	    \
	    -e '/^srcdir/a objdir = $$(WINE_$(3)_OBJ)' \
	    -e '/^prefix/c prefix = $$($(2)_$(3)_DST)' \
	    -e '/^libdir/c libdir = $$($(2)_$(3)_LIBDIR)' \
	    -e '/^toolsdir/c toolsdir = $$(WINE_$$(HOST_ARCH)_OBJ)' \
	    \
	    -e '/^CFLAGS/c CFLAGS = $$($(2)_$(3)_INCFLAGS) $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS)' \
	    -e '/^CPPFLAGS/c CPPFLAGS = $$($(2)_$(3)_INCFLAGS) $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS)' \
	    -e '/^CXXFLAGS/c CXXFLAGS = $$($(2)_$(3)_INCFLAGS) -std=c++17 $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS)' \
	    -e '/^LDFLAGS/c LDFLAGS = $$($(2)_$(3)-$(4)_LIBFLAGS) $$($(2)_$(3)_LIBFLAGS) $$($(2)_LDFLAGS) $$($(3)_LDFLAGS) $$(LDFLAGS)' \
	    \
	    -e '/^x86_64_CC/a x86_64_CXX = $$(x86_64-windows_TARGET)-g++' \
	    -e '/^x86_64_CFLAGS/c x86_64_CFLAGS = $$($(2)_x86_64_INCFLAGS) $$($(2)_CFLAGS) $$(x86_64_CFLAGS) $$(CFLAGS)' \
	    -e '/^x86_64_CPPFLAGS/c x86_64_CPPFLAGS = $$($(2)_x86_64_INCFLAGS) $$($(2)_CFLAGS) $$(x86_64_CFLAGS) $$(CFLAGS)' \
	    -e '/^x86_64_CXXFLAGS/c x86_64_CXXFLAGS = $$($(2)_x86_64_INCFLAGS) -std=c++17 $$($(2)_CFLAGS) $$(x86_64_CFLAGS) $$(CFLAGS)' \
	    -e '/^x86_64_LDFLAGS/c x86_64_LDFLAGS = $$($(2)_x86_64-windows_LIBFLAGS) $$($(2)_x86_64_LIBFLAGS) $$(x86_64_LDFLAGS) $$(LDFLAGS)' \
	    \
	    -e '/^i386_CC/a i386_CXX = $$(i386-windows_TARGET)-g++' \
	    -e '/^i386_CFLAGS/c i386_CFLAGS = $$($(2)_i386_INCFLAGS) $$($(2)_CFLAGS) $$(i386_CFLAGS) $$(CFLAGS)' \
	    -e '/^i386_CPPFLAGS/c i386_CPPFLAGS = $$($(2)_i386_INCFLAGS) $$($(2)_CFLAGS) $$(i386_CFLAGS) $$(CFLAGS)' \
	    -e '/^i386_CXXFLAGS/c i386_CXXFLAGS = $$($(2)_i386_INCFLAGS) -std=c++17 $$($(2)_CFLAGS) $$(i386_CFLAGS) $$(CFLAGS)' \
	    -e '/^i386_LDFLAGS/c i386_LDFLAGS = $$($(2)_i386-windows_LIBFLAGS) $$($(2)_i386_LIBFLAGS) $$(i386_LDFLAGS) $$(LDFLAGS)' \
	    \
	    -e 's@UNIXLDFLAGS =@UNIXLDFLAGS = -L$$(WINE_$(3)_LIBDIR)/wine/$(3)-unix -l:ntdll.so@' \
	    $$(WINE_$(3)_OBJ)/Makefile > $$($(2)_$(3)_OBJ)/Makefile

	cd "$$($(2)_$(3)_OBJ)" && env $$($(2)_$(3)_ENV) \
	$$(WINE_$$(HOST_ARCH)_OBJ)/tools/makedep

	touch $$@

$$(OBJ)/.$(1)-$(3)-build:
	@echo ":: building $(1)-$(3)..." >&2
	+cd "$$($(2)_$(3)_OBJ)" && env $$($(2)_$(3)_ENV) \
	$$(BEAR) $$(MAKE)
	cd "$$($(2)_$(3)_OBJ)" && env $$($(2)_$(3)_ENV) \
	$$(MAKE) install
	touch $$@
endif
endef

rules-makedep = $(call create-rules-makedep,$(1),$(call toupper,$(1)),$(2))
