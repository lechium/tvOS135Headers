/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, NSString, NSData;

@interface CKDWrappingContext : NSObject {

	CKRecordID* _recordID;
	NSString* _fieldName;
	NSData* _fileSignature;
	NSData* _referenceSignature;

}

@property (nonatomic,retain) CKRecordID * recordID;                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * fieldName;                     //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,retain) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
-(CKRecordID *)recordID;
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4 ;
-(id)assetContextString;
-(id)encryptedDataContextString;
@end

