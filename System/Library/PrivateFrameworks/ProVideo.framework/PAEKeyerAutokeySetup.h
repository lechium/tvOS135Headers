/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding> {

	NSMutableArray* _initialSamples;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(id)initialSamples;
-(void)setInitialSamples:(id)arg1 ;
@end

