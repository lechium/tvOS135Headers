/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface PKUniqueAddressField : NSObject {

	NSString* _key;
	long long _index;
	NSError* _error;
	NSString* _invalidText;

}

@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * invalidText;              //@synthesize invalidText=_invalidText - In the implementation block
-(NSString *)key;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(NSString *)invalidText;
-(void)setInvalidText:(NSString *)arg1 ;
@end
