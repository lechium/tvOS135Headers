/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSURLResult;

@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject {

	AMSURLResult* _result;

}

@property (nonatomic,retain) AMSURLResult * result;              //@synthesize result=_result - In the implementation block
-(id)init;
-(AMSURLResult *)result;
-(void)setResult:(AMSURLResult *)arg1 ;
-(id)parseAMSURLResult:(id)arg1 ;
-(id)_parseTotalFromMetaBag;
-(id)_parseOffsetFromMetaBag;
@end

