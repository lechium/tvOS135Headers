/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMEventListenerResponse.h>
@class NSDictionary, NSError;


@protocol IMEventListenerResponse <NSObject>
@property (getter=didSucceed,nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) NSError * error; 
@required
-(NSDictionary *)userInfo;
-(NSError *)error;
-(BOOL)didSucceed;

@end


@class NSDictionary, NSError, NSString;

@interface IMEventListenerResponse : NSObject <IMEventListenerResponse> {

	BOOL _success;
	NSDictionary* _userInfo;
	NSError* _error;

}

@property (assign,getter=didSucceed,nonatomic) BOOL success;              //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSDictionary *)userInfo;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)didSucceed;
-(id)initWithSuccess:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3 ;
@end

