//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKAccessibility : NSObject
{
}

+ (void)_setCapsLockLightOn:(_Bool)arg1;	// IMP=0x00000001000520c8
+ (id)_eventRoutingClientConnectionManager;	// IMP=0x00000001000520bc
+ (_Bool)_isDisplayBacklightOff;	// IMP=0x0000000100052074
+ (_Bool)_objectWithinProximity;	// IMP=0x0000000100052020
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x0000000100051f64
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;	// IMP=0x0000000100051ea8
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1;	// IMP=0x0000000100051ea0
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1;	// IMP=0x0000000100051e98
+ (CDUnknownFunctionPointerType)_accessibilityHIDEventTapCallback;	// IMP=0x0000000100051e8c
+ (void)_accessibilitySetHIDEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000100051e80
+ (CDUnknownFunctionPointerType)_accessibilityEventTapCallback;	// IMP=0x0000000100051e74
+ (void)_accessibilitySetEventTapCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000100051e68
+ (void)_accessibilityProcessExternHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100051e18

@end

