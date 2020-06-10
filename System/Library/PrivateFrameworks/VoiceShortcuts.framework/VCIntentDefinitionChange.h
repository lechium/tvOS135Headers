/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCSYChange.h>

@class NSString, NSArray;

@interface VCIntentDefinitionChange : NSObject <VCSYChange> {

	NSString* _objectIdentifier;
	long long _changeType;
	NSString* _checksum;
	NSArray* _files;

}

@property (nonatomic,copy) NSArray * files;                              //@synthesize files=_files - In the implementation block
@property (nonatomic,copy,readonly) NSString * checksum;                 //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) long long changeType;                       //@synthesize changeType=_changeType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
+(int)messageType;
-(NSString *)description;
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
-(NSString *)objectIdentifier;
-(NSString *)checksum;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2 ;
-(id)initWithApplicationProxy:(id)arg1 changeType:(long long)arg2 ;
-(BOOL)writeTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFrom:(id)arg1 error:(id*)arg2 ;
-(id)sequencer;
@end
