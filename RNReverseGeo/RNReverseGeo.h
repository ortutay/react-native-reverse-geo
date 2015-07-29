//
//  RNReverseGeo.h
//  RNReverseGeo
//
//  Created by Aaron Saunders on 5/11/15.
//  Copyright (c) 2015 Clearly Innovative Iinc. All rights reserved. -
//
#import "Base/RCTBridgeModule.h"

#import <CoreLocation/CLError.h>
#import <CoreLocation/CLLocationManager.h>
#import <CoreLocation/CLLocationManagerDelegate.h>
#import <CoreLocation/CLGeocoder.h>
#import <CoreLocation/CLPlacemark.h>
#import <MapKit/MKPlacemark.h>

@interface RNReverseGeo : NSObject <RCTBridgeModule>
@end
