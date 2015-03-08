//
//  AKFloatPlot.h
//  AudioKitDemo
//
//  Created by Aurelius Prochazka on 3/5/15.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
@interface AKFloatPlot : UIView
#elif TARGET_OS_MAC
#import <Cocoa/Cocoa.h>
@interface AKFloatPlot : NSView
#endif

@property float minimum;
@property float maximum;

- (instancetype)initWithMinimum:(float)minimum maximum:(float)maximum;

- (void)updateWithValue:(float)value;

@end
