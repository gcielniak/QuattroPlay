/*
    Quattro - data table defines
*/
#ifndef TABLES_H_INCLUDED
#define TABLES_H_INCLUDED

#include <stdint.h>

extern uint16_t Q_EnvelopeRateTable[0xa0];
extern uint16_t Q_PitchTable[0x6c];
extern uint16_t Q_LfoWaveTable[0xb0];
extern uint8_t Q_PanTable[0x40];
extern uint8_t Q_VolumeTable[0x100];

extern uint8_t Q_TrackStructMap[0x22];
extern uint8_t Q_ChannelStructMap[0x20];

#endif // TABLES_H_INCLUDED
