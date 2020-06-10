/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSString, NSDate;

@interface _ICNamedEntityRecord : NSObject {

	unsigned char _source;
	unsigned char _type;
	unsigned char _changeType;
	NSString* _name;
	NSString* _phoneticName;
	NSString* _identifier;
	double _score;
	NSString* _languageIdentifier;
	NSDate* _contentCreationDate;
	NSDate* _detectionDate;
	NSString* _sourceIdentifier;
	NSString* _donorBundleIdentifier;
	unsigned long long _detectionAlgorithm;

}

@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * phoneticName;                            //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) unsigned char source;                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned char changeType;                           //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double score;                                         //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSString * languageIdentifier;                      //@synthesize languageIdentifier=_languageIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * contentCreationDate;                       //@synthesize contentCreationDate=_contentCreationDate - In the implementation block
@property (nonatomic,readonly) NSDate * detectionDate;                             //@synthesize detectionDate=_detectionDate - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;                          //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * donorBundleIdentifier;                   //@synthesize donorBundleIdentifier=_donorBundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long detectionAlgorithm;              //@synthesize detectionAlgorithm=_detectionAlgorithm - In the implementation block
+(id)namedEntityRecordWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 donorBundleIdentifier:(id)arg10 detectionAlgorithm:(unsigned long long)arg11 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned char)type;
-(NSString *)identifier;
-(unsigned char)source;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned char)changeType;
-(double)score;
-(NSString *)languageIdentifier;
-(NSString *)sourceIdentifier;
-(void)setScore:(double)arg1 ;
-(NSString *)phoneticName;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSDate *)detectionDate;
-(NSDate *)contentCreationDate;
-(id)typeString:(unsigned char)arg1 ;
-(id)sourceString:(unsigned char)arg1 ;
-(id)initWithName:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3 score:(double)arg4 changeType:(unsigned char)arg5 ;
-(BOOL)isEqualToNamedEntityRecord:(id)arg1 ;
-(id)initWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 donorBundleIdentifier:(id)arg10 detectionAlgorithm:(unsigned long long)arg11 ;
-(NSString *)donorBundleIdentifier;
-(unsigned long long)detectionAlgorithm;
@end

