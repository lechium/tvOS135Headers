/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForMessagesIntentExport.h>

@class NSArray, INDateComponentsRange, NSString;

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) long long recipientsOperator; 
@property (nonatomic,copy,readonly) NSArray * senders; 
@property (nonatomic,readonly) long long sendersOperator; 
@property (nonatomic,copy,readonly) NSArray * searchTerms; 
@property (nonatomic,readonly) long long searchTermsOperator; 
@property (nonatomic,readonly) unsigned long long attributes; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateTimeRange; 
@property (nonatomic,copy,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) long long identifiersOperator; 
@property (nonatomic,copy,readonly) NSArray * notificationIdentifiers; 
@property (nonatomic,readonly) long long notificationIdentifiersOperator; 
@property (nonatomic,copy,readonly) NSArray * speakableGroupNames; 
@property (nonatomic,readonly) long long speakableGroupNamesOperator; 
@property (nonatomic,copy,readonly) NSArray * conversationIdentifiers; 
@property (nonatomic,readonly) long long conversationIdentifiersOperator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)contents;
-(unsigned long long)attributes;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setContents:(id)arg1 ;
-(NSArray *)identifiers;
-(id)_dictionaryRepresentation;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(id)attributeSet;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 ;
-(long long)contentsOperator;
-(id)contentPredicate;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(long long)searchTermsOperator;
-(INDateComponentsRange *)dateTimeRange;
-(void)setDateTimeRange:(INDateComponentsRange *)arg1 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 groupNames:(id)arg8 ;
-(id)groupNames;
-(void)setGroupNames:(id)arg1 ;
-(long long)groupNamesOperator;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
-(NSArray *)notificationIdentifiers;
-(void)setNotificationIdentifiers:(NSArray *)arg1 ;
-(NSArray *)speakableGroupNames;
-(void)setSpeakableGroupNames:(NSArray *)arg1 ;
-(NSArray *)conversationIdentifiers;
-(void)setConversationIdentifiers:(NSArray *)arg1 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 conversationIdentifiers:(id)arg9 ;
-(long long)recipientsOperator;
-(long long)sendersOperator;
-(long long)identifiersOperator;
-(long long)notificationIdentifiersOperator;
-(long long)speakableGroupNamesOperator;
-(long long)conversationIdentifiersOperator;
@end

