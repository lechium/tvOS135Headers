/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVTopShelfContentChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TVTopShelfContent;
@interface TVTopShelfContentReplacement : TVTopShelfContentChange <NSSecureCoding> {

	id<TVTopShelfContent> _replacementContent;

}

@property (nonatomic,retain) id<TVTopShelfContent> replacementContent;              //@synthesize replacementContent=_replacementContent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_replacementContentAllowedClasses;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<TVTopShelfContent>)replacementContent;
-(id)initWithReplacementContent:(id)arg1 ;
-(void)setReplacementContent:(id<TVTopShelfContent>)arg1 ;
@end

