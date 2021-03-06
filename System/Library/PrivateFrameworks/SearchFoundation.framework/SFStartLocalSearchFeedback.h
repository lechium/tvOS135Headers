/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback {

	unsigned long long _indexType;

}

@property (assign,nonatomic) unsigned long long indexType;              //@synthesize indexType=_indexType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)indexType;
-(void)setIndexType:(unsigned long long)arg1 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4 ;
@end

