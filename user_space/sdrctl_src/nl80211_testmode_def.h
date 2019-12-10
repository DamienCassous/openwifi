//---nl80211 cmd testmode definitions
//---should be used in driver sdr.c and user space app like sdrctl, iw

enum openwifi_testmode_attr {
	__OPENWIFI_ATTR_INVALID = 0,
	OPENWIFI_ATTR_CMD = 1,
	OPENWIFI_ATTR_GAP = 2,
	OPENWIFI_ATTR_ADDR0 = 3,
	OPENWIFI_ATTR_ADDR1 = 4,
	OPENWIFI_ATTR_SLICE_TOTAL0 = 5,
	OPENWIFI_ATTR_SLICE_START0 = 6,
	OPENWIFI_ATTR_SLICE_END0 = 7,
	OPENWIFI_ATTR_SLICE_TOTAL1 = 8,
	OPENWIFI_ATTR_SLICE_START1 = 9,
	OPENWIFI_ATTR_SLICE_END1 = 10,
	OPENWIFI_ATTR_RSSI_TH = 11,

	REG_ATTR_ADDR = 12,
	REG_ATTR_VAL = 13,

	/* keep last */
	__OPENWIFI_ATTR_AFTER_LAST,
	OPENWIFI_ATTR_MAX	= __OPENWIFI_ATTR_AFTER_LAST - 1
};

enum openwifi_testmode_cmd {
	OPENWIFI_CMD_SET_GAP = 0,
	OPENWIFI_CMD_GET_GAP = 1,
	
	OPENWIFI_CMD_SET_ADDR0 = 2,
	OPENWIFI_CMD_GET_ADDR0 = 3,
	
	OPENWIFI_CMD_SET_ADDR1 = 4,
	OPENWIFI_CMD_GET_ADDR1 = 5,
	
	OPENWIFI_CMD_SET_SLICE_TOTAL0 = 6,
	OPENWIFI_CMD_GET_SLICE_TOTAL0 = 7,

	OPENWIFI_CMD_SET_SLICE_START0 = 8,
	OPENWIFI_CMD_GET_SLICE_START0 = 9,

	OPENWIFI_CMD_SET_SLICE_END0 = 10,
	OPENWIFI_CMD_GET_SLICE_END0 = 11,

	OPENWIFI_CMD_SET_SLICE_TOTAL1 = 12,
	OPENWIFI_CMD_GET_SLICE_TOTAL1 = 13,

	OPENWIFI_CMD_SET_SLICE_START1 = 14,
	OPENWIFI_CMD_GET_SLICE_START1 = 15,

	OPENWIFI_CMD_SET_SLICE_END1 = 16,
	OPENWIFI_CMD_GET_SLICE_END1 = 17,

	OPENWIFI_CMD_SET_RSSI_TH = 18,
	OPENWIFI_CMD_GET_RSSI_TH = 19,

	REG_CMD_SET = 20,
	REG_CMD_GET = 21,
};

static const struct nla_policy openwifi_testmode_policy[OPENWIFI_ATTR_MAX + 1] = {
	[OPENWIFI_ATTR_CMD] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_GAP] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_ADDR0] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_ADDR1] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_SLICE_TOTAL0] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_SLICE_START0] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_SLICE_END0] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_SLICE_TOTAL1] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_SLICE_START1] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_SLICE_END1] = { .type = NLA_U32 },
	[OPENWIFI_ATTR_RSSI_TH] = { .type = NLA_U32 },

	[REG_ATTR_ADDR] = { .type = NLA_U32 },
	[REG_ATTR_VAL] = { .type = NLA_U32 },
};
