/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITransform, NSString;

@interface _UITransformToReasonAssociation : NSObject {

	UITransform* _transform;
	NSString* _reason;

}

@property (nonatomic,retain) UITransform * transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
+(id)association:(id)arg1 reason:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)reason;
-(UITransform *)transform;
-(void)setReason:(NSString *)arg1 ;
-(void)setTransform:(UITransform *)arg1 ;
-(id)initWithTransform:(id)arg1 reason:(id)arg2 ;
@end

