/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBPayBillIntent.h>
@class _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;


@protocol _INPBPayBillIntent <NSObject>
@property (nonatomic,retain) _INPBBillPayeeValue * billPayee; 
@property (nonatomic,readonly) BOOL hasBillPayee; 
@property (assign,nonatomic) int billType; 
@property (assign,nonatomic) BOOL hasBillType; 
@property (nonatomic,retain) _INPBDateTimeRange * dueDate; 
@property (nonatomic,readonly) BOOL hasDueDate; 
@property (nonatomic,retain) _INPBFinancialAccountValue * fromAccount; 
@property (nonatomic,readonly) BOOL hasFromAccount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBPaymentAmountValue * transactionAmount; 
@property (nonatomic,readonly) BOOL hasTransactionAmount; 
@property (nonatomic,retain) _INPBString * transactionNote; 
@property (nonatomic,readonly) BOOL hasTransactionNote; 
@property (nonatomic,retain) _INPBDateTimeRange * transactionScheduledDate; 
@property (nonatomic,readonly) BOOL hasTransactionScheduledDate; 
@required
-(void)setDueDate:(id)arg1;
-(_INPBDateTimeRange *)dueDate;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(_INPBFinancialAccountValue *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(_INPBPaymentAmountValue *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(_INPBDateTimeRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(_INPBString *)transactionNote;
-(void)setTransactionNote:(id)arg1;
-(BOOL)hasFromAccount;
-(BOOL)hasTransactionAmount;
-(BOOL)hasTransactionNote;
-(BOOL)hasTransactionScheduledDate;
-(_INPBBillPayeeValue *)billPayee;
-(void)setBillPayee:(id)arg1;
-(int)billType;
-(void)setBillType:(int)arg1;
-(id)billTypeAsString:(int)arg1;
-(int)StringAsBillType:(id)arg1;
-(BOOL)hasBillPayee;
-(BOOL)hasBillType;
-(void)setHasBillType:(BOOL)arg1;
-(BOOL)hasDueDate;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString, NSString;

@interface _INPBPayBillIntent : PBCodable <_INPBPayBillIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _billType;
	_INPBBillPayeeValue* _billPayee;
	_INPBDateTimeRange* _dueDate;
	_INPBFinancialAccountValue* _fromAccount;
	_INPBIntentMetadata* _intentMetadata;
	_INPBPaymentAmountValue* _transactionAmount;
	_INPBString* _transactionNote;
	_INPBDateTimeRange* _transactionScheduledDate;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBBillPayeeValue * billPayee;                                            //@synthesize billPayee=_billPayee - In the implementation block
@property (nonatomic,readonly) BOOL hasBillPayee; 
@property (assign,nonatomic) int billType;                                                               //@synthesize billType=_billType - In the implementation block
@property (assign,nonatomic) BOOL hasBillType; 
@property (nonatomic,retain) _INPBDateTimeRange * dueDate;                                               //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,readonly) BOOL hasDueDate; 
@property (nonatomic,retain) _INPBFinancialAccountValue * fromAccount;                                   //@synthesize fromAccount=_fromAccount - In the implementation block
@property (nonatomic,readonly) BOOL hasFromAccount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBPaymentAmountValue * transactionAmount;                                //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionAmount; 
@property (nonatomic,retain) _INPBString * transactionNote;                                              //@synthesize transactionNote=_transactionNote - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionNote; 
@property (nonatomic,retain) _INPBDateTimeRange * transactionScheduledDate;                              //@synthesize transactionScheduledDate=_transactionScheduledDate - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionScheduledDate; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDueDate:(_INPBDateTimeRange *)arg1 ;
-(_INPBDateTimeRange *)dueDate;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBFinancialAccountValue *)fromAccount;
-(void)setFromAccount:(_INPBFinancialAccountValue *)arg1 ;
-(_INPBPaymentAmountValue *)transactionAmount;
-(void)setTransactionAmount:(_INPBPaymentAmountValue *)arg1 ;
-(_INPBDateTimeRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(_INPBDateTimeRange *)arg1 ;
-(_INPBString *)transactionNote;
-(void)setTransactionNote:(_INPBString *)arg1 ;
-(BOOL)hasFromAccount;
-(BOOL)hasTransactionAmount;
-(BOOL)hasTransactionNote;
-(BOOL)hasTransactionScheduledDate;
-(_INPBBillPayeeValue *)billPayee;
-(void)setBillPayee:(_INPBBillPayeeValue *)arg1 ;
-(int)billType;
-(void)setBillType:(int)arg1 ;
-(id)billTypeAsString:(int)arg1 ;
-(int)StringAsBillType:(id)arg1 ;
-(BOOL)hasBillPayee;
-(BOOL)hasBillType;
-(void)setHasBillType:(BOOL)arg1 ;
-(BOOL)hasDueDate;
@end

