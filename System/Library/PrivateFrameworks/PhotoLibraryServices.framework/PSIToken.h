/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIToken : NSObject {

	CFStringRef _string;
	SCD_Struct_PS26 _range;

}

@property (nonatomic,retain) CFStringRef string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) SCD_Struct_PS26 range;              //@synthesize range=_range - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(CFStringRef)string;
-(void)setString:(CFStringRef)arg1 ;
-(SCD_Struct_PS26)range;
-(void)setRange:(SCD_Struct_PS26)arg1 ;
-(id)initWithString:(CFStringRef)arg1 range:(SCD_Struct_PS26)arg2 ;
@end

