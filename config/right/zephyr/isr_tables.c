
/* AUTO-GENERATED by gen_isr_tables.py, do not edit! */

#include <toolchain.h>
#include <linker/sections.h>
#include <sw_isr_table.h>
#include <arch/cpu.h>

#if defined(CONFIG_GEN_SW_ISR_TABLE) && defined(CONFIG_GEN_IRQ_VECTOR_TABLE)
#define ISR_WRAPPER ((uint32_t)&_isr_wrapper)
#else
#define ISR_WRAPPER NULL
#endif

uint32_t __irq_vector_table _irq_vector_table[82] = {
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
};
struct _isr_table_entry __sw_isr_table _sw_isr_table[82] = {
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x200005b8, (void *)0x8017135},
	{(const void *)0x200005b8, (void *)0x8017143},
	{(const void *)0x200005b8, (void *)0x8017151},
	{(const void *)0x200005b8, (void *)0x801715f},
	{(const void *)0x200005b8, (void *)0x801716d},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x200005b8, (void *)0x801717b},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x200005b8, (void *)0x8017189},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)0x8006d25},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
	{(const void *)0x0, (void *)&z_irq_spurious},
};
