/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DaemonUtils/Request.h>

@class NSData, NSDictionary;

@interface EvaluationRequest : Request {

	long long _policy;
	NSData* _acl;
	id _aclOperation;
	NSDictionary* _options;
	long long _purpose;

}

@property (nonatomic,readonly) long long policy;                    //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSData * acl;                        //@synthesize acl=_acl - In the implementation block
@property (nonatomic,readonly) id aclOperation;                     //@synthesize aclOperation=_aclOperation - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long purpose;                   //@synthesize purpose=_purpose - In the implementation block
-(NSDictionary *)options;
-(long long)policy;
-(NSData *)acl;
-(long long)purpose;
-(BOOL)interactive;
-(void)updateOptions:(id)arg1 ;
-(id)initWithPolicy:(long long)arg1 options:(id)arg2 ;
-(id)initWithAcl:(id)arg1 operation:(id)arg2 options:(id)arg3 ;
-(id)aclOperation;
@end
