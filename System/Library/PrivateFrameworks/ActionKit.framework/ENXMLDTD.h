/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString;

@interface ENXMLDTD : NSObject {

	xmlDtd* _dtd;
	NSString* _docTypeDeclaration;

}

@property (nonatomic,retain) NSString * docTypeDeclaration;              //@synthesize docTypeDeclaration=_docTypeDeclaration - In the implementation block
+(void)initialize;
+(id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2 ;
+(id)enexDTD;
+(id)enml2dtd;
+(id)lat1DTD;
+(id)symbolDTD;
+(id)specialDTD;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(xmlEntity*)xmlEntityNamed:(id)arg1 ;
-(xmlElement*)xmlElementNamed:(id)arg1 ;
-(BOOL)isElementLegal:(id)arg1 ;
-(id)sanitizedAttributes:(id)arg1 forElement:(id)arg2 ;
-(BOOL)isAttributeLegal:(id)arg1 inElement:(id)arg2 ;
-(NSString *)docTypeDeclaration;
-(void)setDocTypeDeclaration:(NSString *)arg1 ;
@end

