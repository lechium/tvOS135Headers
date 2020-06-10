/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface AAUIiCloudMediaUsageInfo : NSObject {

	float _bytesUsed;
	NSString* _mediaType;
	UIColor* _representativeColor;
	NSString* _displayLabel;

}

@property (nonatomic,retain) NSString * mediaType;                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) UIColor * representativeColor;              //@synthesize representativeColor=_representativeColor - In the implementation block
@property (assign,nonatomic) float bytesUsed;                            //@synthesize bytesUsed=_bytesUsed - In the implementation block
@property (nonatomic,retain) NSString * displayLabel;                    //@synthesize displayLabel=_displayLabel - In the implementation block
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(float)bytesUsed;
-(void)setBytesUsed:(float)arg1 ;
-(NSString *)displayLabel;
-(id)initWithMediaType:(id)arg1 representativeColor:(id)arg2 bytesUsed:(float)arg3 ;
-(id)capacityBarCatagory;
-(UIColor *)representativeColor;
-(void)setRepresentativeColor:(UIColor *)arg1 ;
-(void)setDisplayLabel:(NSString *)arg1 ;
@end
