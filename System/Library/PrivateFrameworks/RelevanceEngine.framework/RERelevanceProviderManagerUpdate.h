/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying> {

	RERelevanceProvider* _provider;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) RERelevanceProvider * provider; 
@property (nonatomic,readonly) BOOL allProviders; 
@property (nonatomic,copy) id completion;                                   //@synthesize completion=_completion - In the implementation block
+(id)immediateUpdateForAllProviders;
+(id)scheduledUpdateForAllProvidersAtDate:(id)arg1 ;
+(id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2 ;
+(id)immediateUpdateForProvider:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(RERelevanceProvider *)provider;
-(id)initWithProvider:(id)arg1 ;
-(BOOL)allProviders;
@end

