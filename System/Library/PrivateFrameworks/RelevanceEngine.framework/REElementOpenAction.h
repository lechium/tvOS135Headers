/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@class NSURL, NSString;

@interface REElementOpenAction : REElementAction {

	NSURL* _url;
	NSString* _applicationID;

}

@property (nonatomic,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * applicationID;              //@synthesize applicationID=_applicationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)applicationID;
-(void)_performWithContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 applicationID:(id)arg2 ;
@end

