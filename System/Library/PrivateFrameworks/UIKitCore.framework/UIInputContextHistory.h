/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputContextHistory, NSSet, NSString;

@interface UIInputContextHistory : NSObject {

	TIInputContextHistory* _tiInputContextHistory;

}

@property (nonatomic,readonly) NSSet * senderIdentifiers; 
@property (nonatomic,readonly) NSSet * recipientIdentifiers; 
@property (nonatomic,readonly) TIInputContextHistory * tiInputContextHistory;              //@synthesize tiInputContextHistory=_tiInputContextHistory - In the implementation block
@property (nonatomic,readonly) NSString * senderIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)senderIdentifier;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2 ;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 ;
-(id)mostRecentTextEntries:(unsigned long long)arg1 ;
-(NSSet *)recipientIdentifiers;
-(NSSet *)senderIdentifiers;
-(TIInputContextHistory *)tiInputContextHistory;
@end

