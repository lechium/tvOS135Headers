/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHQuery.h>

@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery {

	CHRecognitionSessionIndexableContent* _indexableContent;

}

@property (setter=_setIndexableContent:,retain) CHRecognitionSessionIndexableContent * indexableContent;              //@synthesize indexableContent=_indexableContent - In the implementation block
-(void)dealloc;
-(id)debugName;
-(void)q_updateQueryResult;
-(id)initWithRecognitionSession:(id)arg1 ;
-(CHRecognitionSessionIndexableContent *)indexableContent;
-(void)_setIndexableContent:(id)arg1 ;
@end
