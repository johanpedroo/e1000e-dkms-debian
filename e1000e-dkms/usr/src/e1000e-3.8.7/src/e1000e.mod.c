#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc734fa68, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x75aa893a, "netdev_info" },
	{ 0x888ce9a7, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x73abaca4, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xc01e8c04, "__pm_runtime_idle" },
	{ 0x907ac283, "put_devmap_managed_page" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x35cba48e, "skb_clone_tx_timestamp" },
	{ 0x9592d7f0, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x831192d2, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xc6a106e3, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x406dc121, "pci_read_config_byte" },
	{ 0xcb10ed94, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x3664f836, "dma_set_mask" },
	{ 0xd304cfde, "boot_cpu_data" },
	{ 0x43871c8f, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe345c86f, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x101e25b4, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xca06965b, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5e49487d, "pci_write_config_byte" },
	{ 0x28ae12a0, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x78715e4a, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6849a92d, "__pm_runtime_resume" },
	{ 0x1c943f04, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x4a81eb14, "dma_free_attrs" },
	{ 0x41ccaa3e, "pci_disable_link_state_locked" },
	{ 0x465cf62f, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa5817780, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xef5ab78, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xba707a4f, "__dynamic_netdev_dbg" },
	{ 0x19287d51, "skb_trim" },
	{ 0xc01eeace, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd0f5ba06, "__pskb_pull_tail" },
	{ 0xea5c737c, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfcaae30b, "pci_set_master" },
	{ 0x571af135, "__alloc_pages" },
	{ 0x32992ade, "netif_schedule_queue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xce52ad, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x97b7cacd, "pci_enable_pcie_error_reporting" },
	{ 0xcbe53c46, "convert_art_to_tsc" },
	{ 0x319f48c2, "dma_sync_single_for_cpu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x3c7df9b9, "netif_tx_wake_queue" },
	{ 0xdbeb36cc, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3f05659c, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x10c095ef, "ethtool_op_get_link" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xde80cd09, "ioremap" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x45f60a6, "free_netdev" },
	{ 0x2bd36602, "register_netdev" },
	{ 0xed03642f, "napi_enable" },
	{ 0xcf149e13, "pci_read_config_word" },
	{ 0x3591e9bb, "dma_alloc_attrs" },
	{ 0x37169f79, "cpu_latency_qos_update_request" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x50e52659, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfdde28ec, "netif_napi_add" },
	{ 0xdb8a396f, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x83f938b, "softnet_data" },
	{ 0x4fb21970, "device_wakeup_enable" },
	{ 0x573e7756, "_dev_err" },
	{ 0xa3907c38, "pci_enable_msi" },
	{ 0xf8bab8b5, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x9caf338a, "pci_find_capability" },
	{ 0x800473f, "__cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb4c20995, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x8176cb3f, "netif_device_attach" },
	{ 0x64c693de, "napi_gro_receive" },
	{ 0xbcb1f856, "_dev_info" },
	{ 0x1d03ede8, "__x86_indirect_alt_call_r8" },
	{ 0x464999ba, "kmem_cache_alloc_node_trace" },
	{ 0x8c7e0b2, "pci_disable_link_state" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xa64f8817, "netif_device_detach" },
	{ 0xc9e01985, "__alloc_skb" },
	{ 0x9767ac1c, "pci_enable_msix_range" },
	{ 0x1d2c850c, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x614cd8d, "pm_schedule_suspend" },
	{ 0x72866de2, "passthru_features_check" },
	{ 0xbb3ec5ab, "napi_complete_done" },
	{ 0x2085784e, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5ce12a51, "eth_type_trans" },
	{ 0x215372e4, "dev_driver_string" },
	{ 0xf8ee1c13, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdacb21b1, "netdev_err" },
	{ 0x910024be, "__x86_indirect_alt_call_rdx" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x1f1078c1, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9493fc86, "node_states" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x35015b97, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c19494c, "eth_validate_addr" },
	{ 0xd4cae5b4, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9c6065c, "___pskb_trim" },
	{ 0xa35065c1, "param_array_ops" },
	{ 0xec14fa4, "ptp_clock_index" },
	{ 0xd66d43c2, "pci_disable_msi" },
	{ 0xd9cd5d7d, "dev_trans_start" },
	{ 0x6253a413, "get_device_system_crosststamp" },
	{ 0xedc03953, "iounmap" },
	{ 0x32f0836e, "pci_prepare_to_sleep" },
	{ 0x26f937e9, "dma_sync_single_for_device" },
	{ 0x5a44873f, "pci_dev_run_wake" },
	{ 0x6034402, "__pci_register_driver" },
	{ 0xee67a8eb, "dma_unmap_page_attrs" },
	{ 0x9a353ae, "__x86_indirect_alt_call_rax" },
	{ 0x8399db60, "unregister_netdev" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x33e3862f, "consume_skb" },
	{ 0x3b5d879, "pci_enable_device_mem" },
	{ 0xa99e58bf, "__napi_alloc_skb" },
	{ 0xc4556aaf, "skb_tstamp_tx" },
	{ 0xe598cd31, "__x86_indirect_alt_call_rcx" },
	{ 0x654dbaea, "skb_put" },
	{ 0x809580ae, "pci_release_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x769391e3, "param_ops_uint" },
	{ 0x2428ca50, "skb_copy_bits" },
	{ 0xbf9a8a04, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x8645d9a1, "pci_request_selected_regions_exclusive" },
	{ 0x61acd2fa, "__put_page" },
	{ 0xda7abc8d, "__skb_pad" },
	{ 0xc3b7a2a2, "pcie_capability_read_word" },
	{ 0x63047ea0, "dev_get_stats" },
	{ 0xba302f06, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x459f8f23, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xe246ec2f, "alloc_etherdev_mqs" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000156Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D7758CC98F8DBAA7CE7FDB");
