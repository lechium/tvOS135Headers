/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstFaceConfigEntry : NSObject {

	int faceId;
	CGRect faceRect;
	int framesSinceLast;

}

@property (assign) int faceId; 
@property (assign) CGRect faceRect; 
@property (assign) int framesSinceLast; 
-(id)initWithRect:(CGRect)arg1 withFaceId:(int)arg2 ;
-(int)faceId;
-(void)setFaceId:(int)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
@end

