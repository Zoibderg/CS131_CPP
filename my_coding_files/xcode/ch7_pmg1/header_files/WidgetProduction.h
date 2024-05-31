//
//  WidgetProduction.h
//  ch7_pmg1
//
//  Created by Austin Tesch on 5/31/24.
//

#ifndef WidgetProduction_h
#define WidgetProduction_h

class WidgetProduction{
private:
    
    double const HOURLY_PRODUCTION = 10, SHIFT_LENGTH = 8, DAILY_SHIFTS = 2;
    int widgets;
    
public:
    
    double calcProductionTime(int);

};

#endif /* WidgetProduction_h */
