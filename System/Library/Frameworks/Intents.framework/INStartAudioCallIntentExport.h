/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol INStartAudioCallIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long destinationType; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSArray * contacts; 
@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@required
-(id)init;
-(long long)destinationType;
-(void)setDestinationType:(long long)arg1;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1;
-(long long)recordTypeForRedialing;
-(void)setRecordTypeForRedialing:(long long)arg1;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1;

@end

