/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMIMotionDetection : HMFObject {

	CGRect _boundingBox;

}

@property (readonly) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
-(CGRect)boundingBox;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
@end

