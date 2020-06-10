/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHTMLDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding> {

	HMHTMLDocument* _releaseNotesSummary;
	HMHTMLDocument* _releaseNotes;
	HMHTMLDocument* _licenseAgreement;
	NSNumber* _licenseAgreementVersion;

}

@property (copy,readonly) HMHTMLDocument * releaseNotesSummary;              //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (copy,readonly) HMHTMLDocument * releaseNotes;                     //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (copy,readonly) HMHTMLDocument * licenseAgreement;                 //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (copy,readonly) NSNumber * licenseAgreementVersion;                //@synthesize licenseAgreementVersion=_licenseAgreementVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMHTMLDocument *)releaseNotes;
-(id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 licenseAgreement:(id)arg3 licenseAgreementVersion:(id)arg4 ;
-(HMHTMLDocument *)releaseNotesSummary;
-(HMHTMLDocument *)licenseAgreement;
-(NSNumber *)licenseAgreementVersion;
@end

