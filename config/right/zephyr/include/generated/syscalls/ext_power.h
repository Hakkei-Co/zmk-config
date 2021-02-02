
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_EXT_POWER_H
#define Z_INCLUDE_SYSCALLS_EXT_POWER_H


#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_ext_power_enable(const struct device * dev);
static inline int ext_power_enable(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_EXT_POWER_ENABLE);
	}
#endif
	compiler_barrier();
	return z_impl_ext_power_enable(dev);
}


extern int z_impl_ext_power_disable(const struct device * dev);
static inline int ext_power_disable(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_EXT_POWER_DISABLE);
	}
#endif
	compiler_barrier();
	return z_impl_ext_power_disable(dev);
}


extern int z_impl_ext_power_get(const struct device * dev);
static inline int ext_power_get(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_EXT_POWER_GET);
	}
#endif
	compiler_barrier();
	return z_impl_ext_power_get(dev);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */