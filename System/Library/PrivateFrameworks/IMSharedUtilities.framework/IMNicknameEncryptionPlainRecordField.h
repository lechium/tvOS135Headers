/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject {

	NSString* _fieldName;
	NSData* _plainData;

}

@property (nonatomic,readonly) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSData * plainData;                //@synthesize plainData=_plainData - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)fieldName;
-(id)initWithFieldName:(id)arg1 plainData:(id)arg2 ;
-(NSData *)plainData;
@end
