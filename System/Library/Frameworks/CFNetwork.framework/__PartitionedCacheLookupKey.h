/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface __PartitionedCacheLookupKey : NSObject <NSCopying> {

	NSString* _mainDocOrigin;
	NSString* _domain;

}

@property (nonatomic,retain) NSString * mainDocOrigin;              //@synthesize mainDocOrigin=_mainDocOrigin - In the implementation block
@property (nonatomic,retain) NSString * domain;                     //@synthesize domain=_domain - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(id)initWithPartition:(id)arg1 domain:(id)arg2 ;
-(NSString *)mainDocOrigin;
-(void)setMainDocOrigin:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
@end

