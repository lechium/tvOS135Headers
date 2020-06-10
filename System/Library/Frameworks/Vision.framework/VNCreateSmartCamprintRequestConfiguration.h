/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateSmartCamprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _returnAllResults;

}

@property (assign,nonatomic) BOOL returnAllResults;              //@synthesize returnAllResults=_returnAllResults - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(BOOL)returnAllResults;
-(void)setReturnAllResults:(BOOL)arg1 ;
@end
