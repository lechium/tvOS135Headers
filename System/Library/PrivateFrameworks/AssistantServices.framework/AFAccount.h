/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate;

@interface AFAccount : NSObject <NSCopying, NSSecureCoding> {

	BOOL _peerSiriEnabled;
	BOOL _isActive;
	NSString* _identifier;
	NSString* _label;
	NSString* _assistantIdentifier;
	NSString* _loggingAssistantIdentifier;
	NSString* _speechIdentifier;
	NSString* _hostname;
	NSString* _peerAssistantIdentifier;
	NSString* _peerLoggingAssistantIdentifier;
	NSString* _peerSpeechIdentifier;
	NSString* _peerUserAgentString;
	NSString* _peerLanguageCode;
	NSString* _peerHostname;
	NSString* _predefinedServer;
	NSString* _aceHost;
	NSDictionary* _connectionPolicy;
	NSDate* _connectionPolicyDate;
	NSString* _connectionPolicyHostname;
	NSString* _group;
	NSDictionary* _lastSyncDates;
	NSString* _localeIdentifier;
	NSDate* _connectionPolicyFirstFailureDate;

}

@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * lastSyncDates;                           //@synthesize lastSyncDates=_lastSyncDates - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                            //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                        //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,copy) NSString * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * assistantIdentifier;                         //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * loggingAssistantIdentifier;                  //@synthesize loggingAssistantIdentifier=_loggingAssistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * speechIdentifier;                            //@synthesize speechIdentifier=_speechIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostname;                                    //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * peerAssistantIdentifier;                     //@synthesize peerAssistantIdentifier=_peerAssistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerLoggingAssistantIdentifier;              //@synthesize peerLoggingAssistantIdentifier=_peerLoggingAssistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerSpeechIdentifier;                        //@synthesize peerSpeechIdentifier=_peerSpeechIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerUserAgentString;                         //@synthesize peerUserAgentString=_peerUserAgentString - In the implementation block
@property (nonatomic,copy) NSString * peerLanguageCode;                            //@synthesize peerLanguageCode=_peerLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL peerSiriEnabled;                                 //@synthesize peerSiriEnabled=_peerSiriEnabled - In the implementation block
@property (nonatomic,copy) NSString * peerHostname;                                //@synthesize peerHostname=_peerHostname - In the implementation block
@property (nonatomic,copy) NSString * predefinedServer;                            //@synthesize predefinedServer=_predefinedServer - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                                     //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSDictionary * connectionPolicy;                        //@synthesize connectionPolicy=_connectionPolicy - In the implementation block
@property (nonatomic,copy) NSDate * connectionPolicyDate;                          //@synthesize connectionPolicyDate=_connectionPolicyDate - In the implementation block
@property (nonatomic,copy) NSString * connectionPolicyHostname;                    //@synthesize connectionPolicyHostname=_connectionPolicyHostname - In the implementation block
@property (nonatomic,copy) NSString * group;                                       //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSDate * connectionPolicyFirstFailureDate;              //@synthesize connectionPolicyFirstFailureDate=_connectionPolicyFirstFailureDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)localeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(void)setHostname:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isActive;
-(NSString *)label;
-(NSString *)hostname;
-(void)setLabel:(NSString *)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(NSDictionary *)connectionPolicy;
-(void)setConnectionPolicy:(NSDictionary *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)setAssistantIdentifier:(NSString *)arg1 ;
-(void)setLoggingAssistantIdentifier:(NSString *)arg1 ;
-(void)setSpeechIdentifier:(NSString *)arg1 ;
-(void)setPeerAssistantIdentifier:(NSString *)arg1 ;
-(void)setPeerLoggingAssistantIdentifier:(NSString *)arg1 ;
-(void)setPeerSpeechIdentifier:(NSString *)arg1 ;
-(void)setPeerUserAgentString:(NSString *)arg1 ;
-(void)setPeerLanguageCode:(NSString *)arg1 ;
-(void)setPeerSiriEnabled:(BOOL)arg1 ;
-(void)setPeerHostname:(NSString *)arg1 ;
-(void)setPredefinedServer:(NSString *)arg1 ;
-(void)setAceHost:(NSString *)arg1 ;
-(void)setConnectionPolicyDate:(NSDate *)arg1 ;
-(void)setConnectionPolicyFirstFailureDate:(NSDate *)arg1 ;
-(void)setConnectionPolicyHostname:(NSString *)arg1 ;
-(NSString *)assistantIdentifier;
-(NSString *)loggingAssistantIdentifier;
-(NSString *)speechIdentifier;
-(NSString *)peerAssistantIdentifier;
-(NSString *)peerLoggingAssistantIdentifier;
-(NSString *)peerSpeechIdentifier;
-(NSString *)peerUserAgentString;
-(NSString *)predefinedServer;
-(NSString *)aceHost;
-(NSDate *)connectionPolicyDate;
-(NSString *)connectionPolicyHostname;
-(NSDate *)connectionPolicyFirstFailureDate;
-(NSDictionary *)lastSyncDates;
-(void)setLastSyncDates:(NSDictionary *)arg1 ;
-(id)initWithMessageDictionary:(id)arg1 ;
-(id)messageDictionary;
-(NSString *)peerLanguageCode;
-(BOOL)peerSiriEnabled;
-(NSString *)peerHostname;
@end

