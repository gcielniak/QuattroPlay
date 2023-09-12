#ifndef S2X_TABLES_H_INCLUDED
#define S2X_TABLES_H_INCLUDED

extern char* S2X_DriverTypes[S2X_TYPE_MAX];
extern uint8_t S2X_FMKeyCodes[0x80];
extern uint8_t S2X_FMConnection[8];
extern uint16_t S2X_PitchTable[0x60];
extern uint16_t S2X_EnvelopeRateTable[0x80];
extern uint8_t S2X_AdsrTable[16];
extern uint8_t S2X_NABankTable[7];
extern uint32_t S2X_S86WSGPitchTable[27];
#endif // S2X_TABLES_H_INCLUDED
