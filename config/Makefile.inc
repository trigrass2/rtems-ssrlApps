#
# BSP specific settings. To be included in application Makefiles
#

include $(RTEMS_MAKEFILE_PATH)/rtems-version.cfg


RTEMS_CUSTOM = $(RTEMS_MAKEFILE_PATH)/site.cfg
PROJECT_ROOT = $(prefix)

#TODO: Hmm. These are perhaps still BSP specific???
RTEMS_USE_OWN_PDIR = no
RTEMS_HAS_POSIX_API = yes
RTEMS_HAS_ITRON_API = no
RTEMS_USE_MACROS = no
RTEMS_HAS_CPLUSPLUS = yes
RTEMS_USE_GCC272 = no
RTEMS_LIBC_DIR = 

export CC
export AS
export LD
export NM
export AR
export SIZE
export OBJCOPY
export XSYMS
export RTEMS_SITE_DIR


export RTEMS_BSP
export RTEMS_CUSTOM
export PROJECT_ROOT

# FIXME: The following shouldn't be here
RTEMS_ROOT = $(PROJECT_ROOT)
export RTEMS_ROOT