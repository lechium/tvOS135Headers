/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardLineSerialization <NSObject>
@required
-(void)serializeData:(id)arg1;
-(void)serializeString:(id)arg1;
-(id)insertionMarker;
-(void)insertLine:(id)arg1 atMarker:(id)arg2;
-(unsigned long long)estimatedDataLength;
-(BOOL)canSerializeString:(id)arg1;
-(BOOL)canSerializeArray:(id)arg1;
-(BOOL)canSerializeData:(id)arg1;
-(void)serializeLine:(id)arg1;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
-(void)serializeOpaqueValue:(id)arg1;
-(void)serializeVersionPlaceholder;

@end

