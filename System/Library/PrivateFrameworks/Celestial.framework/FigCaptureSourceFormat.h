/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding> {

	NSDictionary* _formatDictionary;
	opaqueCMFormatDescriptionRef _formatDescription;
	SCD_Struct_BW19 _previewDimensions;

}

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (readonly) unsigned format; 
@property (getter=isDefaultActiveFormat,readonly) BOOL defaultActiveFormat; 
@property (getter=isExperimental,readonly) BOOL experimental; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)format;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(BOOL)isDefaultActiveFormat;
-(BOOL)isExperimental;
@end

