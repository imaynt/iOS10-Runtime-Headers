/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSXMLParser, RUIObjectModel, NSData, NSMutableArray, NSURL;

@interface RUIParser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    NSMutableArray *_currentPageStack;
    int _actionSignal;
    int _parserState;
    NSURL *_baseURL;
    BOOL _succeeded;
    NSData *_xmlData;
}

@property(retain) NSURL * baseURL;
@property(retain) NSData * xmlData;
@property(readonly) BOOL succeeded;


- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (id)xmlData;
- (id)_lastRow;
- (void)_addNavigationBarWithAttributes:(id)arg1;
- (id)_createSupplementalPageNamed:(id)arg1;
- (void)_newRowWithAttributeDict:(id)arg1;
- (void)_addTableFooterViewWithAttributes:(id)arg1;
- (void)_addTableHeaderViewWithAttributes:(id)arg1;
- (void)_addSectionWithAttributes:(id)arg1;
- (id)_lastPageCreateIfNeeded;
- (id)_createNewPageWithAttributes:(id)arg1;
- (void)setXmlData:(id)arg1;
- (id)initWithXML:(id)arg1;
- (BOOL)succeeded;
- (int)actionSignal;
- (id)uiObjectModel;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (void)dealloc;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

@end