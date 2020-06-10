/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@interface TVCKBlockBasedValueTransformer : NSValueTransformer {

	/*^block*/id _transformerBlock;

}

@property (nonatomic,copy) id transformerBlock;              //@synthesize transformerBlock=_transformerBlock - In the implementation block
-(id)init;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)transformerBlock;
-(void)setTransformerBlock:(id)arg1 ;
@end
