import XCTest
import SwiftTreeSitter
import TreeSitterMdsl

final class TreeSitterMdslTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mdsl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Mdsl grammar")
    }
}
