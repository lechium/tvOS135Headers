/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SFCodingOptions;

@interface SFDecoder : NSObject {

	id _decoderInternal;

}

@property (nonatomic,copy) SFCodingOptions * options; 
-(SFCodingOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)setOptions:(SFCodingOptions *)arg1 ;
-(id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3 ;
@end

