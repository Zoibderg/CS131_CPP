//
//  widget_production.cpp
//  ch7_pmg1
//
//  Created by Austin Tesch on 5/31/24.
//

#include "WidgetProduction.h"

double WidgetProduction::calcProductionTime(int widgets){
    // calculate how many days to produce any number of widgets
    // (total_widgets / 10) - total hours needed
    // (total_hours_needed / 8) - total shifts needed
    // (total_shifts / 2) - total days needed
    
    double time_frame = ((widgets / HOURLY_PRODUCTION) / SHIFT_LENGTH) / DAILY_SHIFTS;
    
    return time_frame;
}
