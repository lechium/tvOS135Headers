/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <Foundation/NSValueTransformer.h>

@interface VSImageScaleValueTransformer : NSValueTransformer {

	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;              //@synthesize preferredSize=_preferredSize - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(CGSize)preferredSize;
@end

