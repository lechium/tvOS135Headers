/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@interface TVHSBlockValueTransformer : NSValueTransformer {

	/*^block*/id _valueTransformBlock;

}

@property (nonatomic,copy) id valueTransformBlock;              //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
+(BOOL)allowsReverseTransformation;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)initWithValueTransformBlock:(/*^block*/id)arg1 ;
-(id)valueTransformBlock;
-(void)setValueTransformBlock:(id)arg1 ;
@end

