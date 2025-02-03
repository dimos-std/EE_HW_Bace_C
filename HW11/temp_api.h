



#ifndef TEMP_API_H
#define TEMP_API_H

#include <inttypes.h>

typedef struct
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temp;
} temp_rec_t;


void print_stats_for_each_month(uint32_t num_data, temp_rec_t *data);
void print_stats_for_year(uint32_t num_data, temp_rec_t *data);

#endif

