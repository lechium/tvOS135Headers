/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _TVTemplateFeatureContextHandle : NSObject {

	id _context;
	long long _rank;

}

@property (nonatomic,readonly) id context;                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long rank;              //@synthesize rank=_rank - In the implementation block
+(id)handleWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)context;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
@end

