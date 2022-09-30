#define BMM_DEVADDR    0x10
#define BMM_RA_DATA    0x42
#define BMM_RA_POWER   0x4B
#define BMM_RA_CONTROL 0x4C
#define BMM_RA_REPXY   0x51
#define BMM_RA_REPZ    0x52

#define BMM_POWER_FLAG_RESET    ((0x01 << 7) | (0x01 << 1))
#define BMM_POWER_FLAG_SLEEP    0x01

#define BMM_MAKE_REPXY(numRepetitions) (((uint16_t)numRepetitions) / 2 - 1)
#define BMM_MAKE_REPZ(numRepetitions)  (((uint8_t)numRepetitions) - 1)

#define BMM_REPXY_LOWPOWER     BMM_MAKE_REPXY(3)
#define BMM_REPXY_REGULAR      BMM_MAKE_REPXY(9)
#define BMM_REPXY_ENHANCED     BMM_MAKE_REPXY(15)
#define BMM_REPXY_HIGHACCURACY BMM_MAKE_REPXY(47)
#define BMM_REPZ_LOWPOWER      BMM_MAKE_REPZ(3)
#define BMM_REPZ_REGULAR       BMM_MAKE_REPZ(15)
#define BMM_REPZ_ENHANCED      BMM_MAKE_REPZ(27)
#define BMM_REPZ_HIGHACCURACY  BMM_MAKE_REPZ(83)

#define BMM_CFG_DATA_RATE_10HZ 0 << 3
#define BMM_CFG_DATA_RATE_2HZ  1 << 3
#define BMM_CFG_DATA_RATE_6HZ  2 << 3
#define BMM_CFG_DATA_RATE_8HZ  3 << 3
#define BMM_CFG_DATA_RATE_15HZ 4 << 3
#define BMM_CFG_DATA_RATE_20HZ 5 << 3
#define BMM_CFG_DATA_RATE_25HZ 6 << 3
#define BMM_CFG_DATA_RATE_30HZ 7 << 3
#define BMM_CFG_OPMODE_NORMAL  0b00 << 1
#define BMM_CFG_OPMODE_FORCED  0b01 << 1
#define BMM_CFG_OPMODE_SLEEP   0b11 << 1