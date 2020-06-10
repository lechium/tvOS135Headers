/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class AKAnisetteData;

@interface TRLegacyAnisetteDataResponse : TRResponseMessage {

	AKAnisetteData* _anisetteData;

}

@property (nonatomic,copy) AKAnisetteData * anisetteData;              //@synthesize anisetteData=_anisetteData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKAnisetteData *)anisetteData;
-(void)setAnisetteData:(AKAnisetteData *)arg1 ;
@end

